import Data.List

incSolve :: [[Int]] -> Bool
incSolve ((_ : _) : []) = True
incSolve ((a : b : []) : (c : d : []) : xs) = (a /= c || b == d) && incSolve ((c: d : []) : xs)

solve :: [[Int]] -> Bool
solve = incSolve . sort

question :: Int -> IO ()
question a = questionsRec a []
    where
        questionsRec 0 lst = putStrLn $ if solve lst then "YES" else "NO"
        questionsRec b lst = getLine >>= \line -> questionsRec (b - 1)
            (map read (words line) : lst)

questions :: Int -> IO ()
questions 0 = return ()
questions a = readLn >>= question >> questions (a - 1)

main :: IO ()
main = readLn >>= questions
