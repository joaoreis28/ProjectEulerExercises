main :: IO ()
main = do
    let resp =  sum[x | x <-[1..999] , x `mod` 3 == 0 || x `mod` 5 == 0]
    print resp

