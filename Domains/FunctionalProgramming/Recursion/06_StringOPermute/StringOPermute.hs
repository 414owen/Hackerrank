revTwo (a : b : xs) = b : a : revTwo xs
revTwo a = a

solve :: Int -> IO ()
solve 0 = return ()
solve a = getLine >>= putStrLn . revTwo >> solve (a - 1)

main = readLn >>= solve
