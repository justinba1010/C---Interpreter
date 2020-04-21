module UnsafeJustinIO where
import Data.Text.Unsafe
-- If a `*** Exception: read: no parse` shows up, this is where it was thrown

printInt int = unsafeDupablePerformIO $ putStrLn (show int)

readInt () = (read (unsafeDupablePerformIO $ getLine) :: Int)

printDouble double = unsafeDupablePerformIO $ putStrLn (show double)

readDouble () = (read (unsafeDupablePerformIO $ getLine) :: Double)

