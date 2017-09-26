
rev l = reverse l

main = do
    inputdata <- getContents
    let inputList = map read (lines inputdata) :: [Int]
    mapM_ print (rev inputList)
