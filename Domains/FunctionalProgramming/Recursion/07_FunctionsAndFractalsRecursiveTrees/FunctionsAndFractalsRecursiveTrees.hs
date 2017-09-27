import Data.List

-- Space has to be ascii-higher than fill
space = '_'
fill = '1'
rows = 63
start = 49

empty :: [Char]
empty = replicate (start * 2 + 2) space

branch :: [Char]
branch = intercalate [fill] (replicate 2 (replicate start space))

transition :: Int -> [Char] -> [[Char]]
transition (-1) _ = []
transition len br = zipWith min br (reverse br) :
                        transition (len - 1) (drop 1 br ++ [space])

tree :: Int -> Int -> [Char] -> [[Char]]
tree _ 0 _ = []
tree len it br = let trans = reverse (transition len br) in
    tree (len `div` 2) (it - 1) (head trans) ++ trans ++ replicate (len - 1) br

main = readLn >>= \a -> let lines = tree 16 a branch in
    mapM putStrLn
        (replicate (rows - length lines) empty ++ map (reverse . ((:) space)) lines)
