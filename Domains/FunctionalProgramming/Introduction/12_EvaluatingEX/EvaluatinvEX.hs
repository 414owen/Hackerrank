import Control.Applicative
import Control.Monad
import System.IO

main :: IO ()
main = read  <$> getLine >>= \lines ->
    forM_ [1..lines] $ \a0 ->
        read <$> getLine >>= print . (\n -> sum (map (\t -> (n**t) / fact t) [0..9]))

fact 0 = 1
fact n = n * fact (n - 1)
