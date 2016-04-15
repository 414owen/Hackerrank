len :: [a] -> Int
len lst = length lst

main = do
    inputStrings <- getContents
    let input = lines inputStrings
    print (len input)