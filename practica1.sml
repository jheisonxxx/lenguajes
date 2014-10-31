fun iguales(dia1 : int * int * int, dia2 : int * int * int) =
    (#1 dia1 = #1 dia2) andalso (#2 dia1 = #2 dia2) andalso (#3 dia1 = #3 dia2)

fun is_older (dia1 : int * int * int, dia2 : int * int * int) =
    if iguales (dia1, dia2)
    then false
    else (#1 dia1 <= #1 dia2) andalso (#2 dia1 <= #2 dia2) andalso (#3 dia1 <= #3 dia2)


(*Ejercicio 2*)
fun number_in_month (fechas : (int * int * int) list, mes : int) =
    if null fechas
    then 0
    else if #2 (hd fechas) = mes
         then 1 + number_in_month (tl fechas, mes)
         else number_in_month (tl fechas, mes)


(*Ejercicio 3*)
fun number_in_months (fechas : (int * int * int) list, meses : int list) =
    if null meses
    then 0
    else number_in_month (fechas, hd meses) + number_in_months (fechas, tl meses)

(*Ejercicio 4*)

fun dates_in_month (fechas : (int * int * int) list, mes : int ) =
    if null fechas
    then []
    else if #2 (hd fechas) = mes
        then hd fechas :: dates_in_month (tl fechas, mes)
        else dates_in_month (tl fechas, mes)



(*Ejercicio 5*)
fun dates_in_months (fechas : (int * int * int) list, meses : int list) =
    if null meses
    then []
    else dates_in_month (fechas, hd meses) @ dates_in_months (fechas, tl meses)




(*Ejercicio 6*)
fun get_nth(lista : string list, n : int) =
if n = 1 then hd lista
else get_nth(tl lista, n - 1)

(*Ejercicio 7*)
val meses = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubrer", "Noviembre", "Diciembre"]
fun date_to_string(fecha : (int*int*int)) =
get_nth(meses, #2 fecha) ^ " " ^ Int.toString(#1 fecha) ^ ", " ^ Int.toString(#3 fecha)

