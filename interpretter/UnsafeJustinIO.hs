module UnsafeJustinIO where
import System.IO.Unsafe

-- If a `*** Exception: read: no parse` shows up, this is where it was thrown

printInt int = unsafePerformIO $ putStrLn (show int)

readInt () = (read (unsafePerformIO $ getLine) :: Int)

printDouble double = unsafePerformIO $ putStrLn (show double)

readDouble () = (read (unsafePerformIO $ getLine) :: Double)

