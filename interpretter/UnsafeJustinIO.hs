module UnsafeJustinIO where
import System.IO
import System.IO.Unsafe
-- If a `*** Exception: read: no parse` shows up, this is where it was thrown
import ErrM

printInt int (functionTable, context, exitCode, prints) =
  Ok (functionTable, context, exitCode, (show int):prints)

readInt () = (read (unsafePerformIO $ getLine) :: Integer)

printDouble int (functionTable, context, exitCode, prints) =
  Ok (functionTable, context, exitCode, (show int):prints)

printString s (functionTable, context, exitCode, prints) =
  Ok (functionTable, context, exitCode, s:prints)

readDouble () = (read (unsafePerformIO $ getLine) :: Double)

