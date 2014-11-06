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

(*Ejercicio 8*)

fun number_before_reaching_sum(sum : int, lista : int list) =
let
	fun buscar_index(index: int, corrida_sum: int, vs: int list) =
	if corrida_sum + hd vs >= sum then index
	else buscar_index(index + 1, corrida_sum + hd vs, tl vs)
in
	buscar_index(0, 0, lista)
end


(*Ejercicio  9*)
val meses_dias = [31,28,31,30,31,30,31,31,30,31,30,31]
fun what_month (dia : int) =
	number_before_reaching_sum(dia, meses_dias)+1


(*Ejericicio 10*)
fun month_range(dia1 : int, dia2 :int) =
	if dia1 > dia2
		then []
		else (what_month(dia1)) :: month_range(dia1+1, dia2)

(* Ejercicio 11. *)
fun oldest(fechas : (int*int*int) list)=
	if null fechas
	then NONE
	else let
		fun oldest_date(fechas : (int*int*int) list)=
				if null (tl fechas)
				then hd fechas
				else let val fechas_ans = oldest_date(tl fechas)
					 in
						if is_older(hd fechas, fechas_ans)
						then hd fechas
						else fechas_ans
					 end
		in
			SOME (oldest_date(fechas))
		end



