import Data.Tuple

solve :: [(Int, Int)] -> Double
solve lst = let newLst = lst ++ [head lst]
            in abs (fromIntegral (crossMul (map swap newLst) - crossMul newLst) / 2)
                where
                    crossMul :: [(Int, Int)] -> Int
                    crossMul ((a, b) : (c, d) : xs) = a * d + crossMul ((c, d) : xs)
                    crossMul _ = 0


main = (readLn :: IO Int) >>= (\lines -> putStrLn . show . solve =<< (mapM (\_ -> tup . (map (read :: String -> Int) . words) <$> getLine) [1..lines]))
    where tup [a, b] = (a, b)
          tup _ = (0, 0)
