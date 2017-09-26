f :: [Int] -> [Int]
f lst = map snd (filter ((\a -> mod a 2 == 1) . fst) (zipWithIndex lst))

zipWithIndex :: [a] -> [(Int, a)]
zipWithIndex lst = zip [0..] lst

main = do
   inputdata <- getContents
   mapM_ (putStrLn. show). f. map read. lines $ inputdata
