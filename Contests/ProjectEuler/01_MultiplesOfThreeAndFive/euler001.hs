main = do 
        let cases = read $ getLine
        input <- getLine
        let parsedIn = read input :: Integer
        let result = sum [x | x <- [1..parsedIn - 1], x `mod` 5 == 0 || x `mod` 3 == 0]
        putStrLn $ (show result)
