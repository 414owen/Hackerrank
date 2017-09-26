import Data.List
import Control.Monad


main = do
    casesIn <- getLine
    let cases = read casesIn :: Int
    let list = take cases pascal
    putStrLn (intercalate "\n" (map (unwords . map (show)) list))
    
pascal :: [[Int]]
pascal = pascSeq [1]
    where
        pascSeq n = n : pascSeq (nextPascal n)

nextPascal :: [Int] -> [Int]
nextPascal n = 1 : (addRight n)
    where 
        addRight (x:[]) = x:[]
        addRight (x:xs) = x + (head xs) : (addRight xs)