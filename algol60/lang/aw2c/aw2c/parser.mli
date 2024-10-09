type token =
  | Identifier of (Table.Id.t)
  | String of (string)
  | Real of (string * string)
  | Imaginary of (string * string)
  | LongReal of (string * string)
  | LongImaginary of (string * string)
  | Bits of (string)
  | Integer of (string)
  | C of (string)
  | FULLSTOP
  | EOF
  | TRUE
  | FALSE
  | NULL
  | IF
  | THEN
  | ELSE
  | CASE
  | OF
  | WHILE
  | DO
  | ASSERT
  | GOTO
  | FOR
  | UNTIL
  | STEP
  | AND
  | OR
  | SHL
  | SHR
  | PLUS
  | MINUS
  | STAR
  | SLASH
  | DIV
  | REM
  | STARSTAR
  | EQ
  | NE
  | GT
  | LT
  | GE
  | LE
  | IS
  | ASSIGN
  | BEGIN
  | COLON
  | SEMICOLON
  | END
  | BRA
  | COMMA
  | BAR
  | KET
  | INTEGER
  | REAL
  | COMPLEX
  | LONG_REAL
  | LONG_COMPLEX
  | LOGICAL
  | BITS
  | STRING
  | REFERENCE
  | LONG
  | SHORT
  | ABS
  | NOT
  | ARRAY
  | COLONCOLON
  | PROCEDURE
  | VALUE
  | RESULT
  | RECORD

val program :
  (Lexing.lexbuf  -> token) -> Lexing.lexbuf -> Tree.t option * Tree.t
val test_declaration :
  (Lexing.lexbuf  -> token) -> Lexing.lexbuf -> Tree.t
