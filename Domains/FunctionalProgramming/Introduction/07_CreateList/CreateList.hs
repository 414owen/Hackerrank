fn n = [1..n]

main = do
    items <- getLine
    print $ fn (read items)