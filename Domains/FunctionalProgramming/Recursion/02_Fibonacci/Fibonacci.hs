module Main where

fib n = fseq !! (n - 1)
    where
        fseq = fibseq 0 1
            where
                fibseq n m = n : (fibseq m (n+m))

main = do
    input <- getLine
    print . fib . (read :: String -> Int) $ input