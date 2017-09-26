import Text.Printf (printf)

interval = 0.001

integral f l r = sum [ (f x) * dx | x <- [l, l+dx .. r] ]
    where dx = 0.001

func :: [Double] -> [Double] -> Double -> Double
func a b x = sum [ac * (x ** bc) | (ac, bc) <- zip a b]

rotate f x = y * y * pi
    where y = f x

area f l r = integral f l r
volume f l r = integral (rotate f) l r

solve l r a b = let f = func a b in
    [area f l r, volume f l r]

--Input/Output.
main :: IO ()
main = getContents >>= mapM_ (printf "%.1f\n"). (\[a, b, [l, r]] -> solve l r a b). map (map read. words). lines
