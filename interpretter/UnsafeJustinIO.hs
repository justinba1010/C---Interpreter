module UnsafeJustinIO where
import Data.Text.Unsafe
import System.IO
-- If a `*** Exception: read: no parse` shows up, this is where it was thrown
import ErrM

printInt int (functionTable, context, exitCode, prints) =
  Ok (functionTable, context, exitCode, (show int):prints)

readInt () = (read (unsafeDupablePerformIO $ getLine) :: Integer)

printDouble int (functionTable, context, exitCode, prints) =
  Ok (functionTable, context, exitCode, (show int):prints)

readDouble () = (read (unsafeDupablePerformIO $ getLine) :: Double)

