perimeter :: ([Int], [Int]) -> Double
perimeter ([x, y], [x1, y1]) = sqrt (fromIntegral ((x1 - x) ^ 2 + (y1 - y) ^ 2))

solve :: [[Int]] -> Double
solve a = sum (map perimeter (zip a ((drop 1 a) ++ [head a])))

main = (readLn :: IO Int) >>= (\lines -> putStrLn . show . solve =<< (mapM (\_ -> (map (read :: String -> Int) . words) <$> getLine) [1..lines]))
