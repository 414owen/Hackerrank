import Data.List

height = 32

spaceChar = '_'
fullChar = '1'

triangle :: Int -> [[Char]]
triangle 0 = []
triangle n = let
                 under = height - n
                 body = height * 2 - 1 - (height - n) * 2
             in  ((replicate under spaceChar ++ replicate body fullChar ++
                 replicate under spaceChar) : (
                     triangle (n - 1)))

solve :: Int -> IO ()
solve n = putStrLn $ intercalate "\n" $ solveInt n (reverse (triangle height))
    where
        occurToChar 1 = fullChar
        occurToChar _ = spaceChar
        triChar (a, b) = occurToChar (length (filter (== fullChar) [a, b]))
        foldStrs (stra, strb) = map triChar (zip stra strb)
        solveInt 0 tri = tri
        solveInt a tri = let (start, end) = splitAt (length tri `div` 2) tri
                             newEnd = map foldStrs (zip (reverse start) end)
                         in  solveInt (a - 1) start ++ solveInt (a - 1) newEnd

main = readLn >>= solve
