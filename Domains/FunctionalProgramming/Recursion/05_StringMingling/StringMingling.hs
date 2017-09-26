main = getLine >>= (\a -> getLine >>= (\b -> putStrLn (concatMap (\(c, d) -> c : d : [] ) (zip a b))))
