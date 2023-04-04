const char calibracao_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
	<head>
		<title>MBD Ensaio Temperatura</title>
		<meta charset='utf-8'>
		<style>html { font-family: Helvetica; display: inline-block;""margin: 0px auto; text-align: center;}
		.button { background-color: #4CAF50; border: none; color: white; padding: 5px 30px;text-decoration: none; font-size: 15px; margin: 2px; cursor: pointer;}
		</style>
	</head>
		<body>
			<h1 style="text-align:center"><img alt="" src="data:image/jpeg;base64,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" /></h1>

			<h1 style="text-align:center">MBD - Calibracao Sensores</h1>

			<h2>Sensores</h2>

			<p><label>Escolha o Sensor: </label>
				
				<select name="sensor">
					<option value="DHT1_T">DHT1 Temperatura</option>
					<option value="DHT2_T">DHT2 Temperatura</option>
					<option value="DHT3_T">DHT3 Temperatura</option>
					<option value="DHT4_T">DHT4 Temperatura</option>
					<option value="DHT1_U">DHT1 Umidade</option>
					<option value="DHT2_U">DHT2 Umidade</option>
					<option value="DHT3_U">DHT3 Umidade</option>
					<option value="DHT4_U">DHT4 Umidade</option>
					<option value="TERMOPAR1">Termopar 1</option>
					<option value="TERMOPAR2">Termopar 2</option>
					<option value="TERMOPAR3">Termopar 3</option>
					<option value="TERMOPAR4">Termopar 4</option>
					<option value="TERMOPAR5">Termopar 5</option>
					<option value="TENSAO_BAIXA1">Tensão Baixa 1</option>
					<option value="CORRENTE_BAIXA1">Corrente Baixa 1</option>
					<option value="TENSAO_ALTA1">Tensão Alta 1</option>
					<option value="CORRENTE_ALTA1">Corrente Alta 1</option>
				</select>
				
				<a href='/sensorhtml'><input name="OK Sensor" type="button" value="Selecionar Sensor..." /></a></p>

			<h2>Medidas</h2>

				<p><label>Medida 1:     </label><span id="m1read" maxlength="5" name="Medida1_x2" size="5" type="text">xx.xxx </span>
					<input maxlength="5" name="Medida1_x1" size="5" type="text" />
					<a href='/m1html'><input name="OK_Medida1" type="button" value="Guarda Medidas 1" /></a></p>
				
				<p><label>Medida 2:     </label><<span id="m2read" maxlength="5" name="Medida2_y2" size="5" type="text">xx.xxx </span>
					<input maxlength="5" name="Medida2_y1" size="5" type="text" />
					<a href='/m2html'><input name="OK_Medida2" type="button" value="Guarda Medidas 2" /></a></p>
				
				<p style="text-align:center">
					<a href='/calculahtml'><input name="OK_Calcula" type="button" value="Calcular" /></a></p>

			<h2>Parâmetros</h2>
				
				<p><label>Parâmetros Atuais:      </label>
					<label> Alfa: </label><label id="alfa_atual" maxlength="5" name="Alfa Atual" size="5" type="text" />
					<label> Beta: </label><label id="beta_atual" maxlength="5" name="Beta Atual" size="5" type="text" />
				
				<p><label>Parâmetros Calculados:      </label>
					<label> Alfa: </label><label id="alfa_calculado" maxlength="5" name="Beta Atual" size="5" type="text" />
					<label> Beta: </label><label id="beta_calculado" maxlength="5" name="Beta Atual" size="5" type="text" />
				
				<p style="text-align:center">
					<a href='/aceitahtml'><input name="Aceita_Dados" type="button" value="Aceitar Dados Calculados" /></a>
					<a href='/reloadhtml'><input name="Refaz_Calculos" type="button" value="Refazer Calculos" /></a>
					<a href='/'><input name="Volta" type="button" value="Voltar..." /></a></p>

			<script>
				setInterval(function() {
					getDataM1();
					getDataM2();
					getDataAlfaAtual();
					getDataBetaAtual();
					getDataAlfaCalculado();
					getDataBetaCalculado()
					}, 2000);
				function getDataM1() {
				  var xhttp = new XMLHttpRequest();
				  xhttp.onreadystatechange = function() {
					if (this.readyState == 4 && this.status == 200) {
					  document.getElementById("m1read").innerHTML =
					  this.responseText;
					}
				  };
				  xhttp.open("GET", "m1read", true);
				  xhttp.send();
				}
				function getDataM2() {
				  var xhttp = new XMLHttpRequest();
				  xhttp.onreadystatechange = function() {
					if (this.readyState == 4 && this.status == 200) {
					  document.getElementById("m2read").innerHTML =
					  this.responseText;
					}
				  };
				  xhttp.open("GET", "m2read", true);
				  xhttp.send();
				}
				function getDataAlfaAtual() {
				  var xhttp = new XMLHttpRequest();
				  xhttp.onreadystatechange = function() {
					if (this.readyState == 4 && this.status == 200) {
					  document.getElementById("alfa_atual").innerHTML =
					  this.responseText;
					}
				  };
				  xhttp.open("GET", "alfaatual", true);
				  xhttp.send();
				}
				function getDataBetaAtual() {
				  var xhttp = new XMLHttpRequest();
				  xhttp.onreadystatechange = function() {
					if (this.readyState == 4 && this.status == 200) {
					  document.getElementById("beta_atual").innerHTML =
					  this.responseText;
					}
				  };
				  xhttp.open("GET", "betaatual", true);
				  xhttp.send();
				}
				function getDataAlfaCalculado() {
				  var xhttp = new XMLHttpRequest();
				  xhttp.onreadystatechange = function() {
					if (this.readyState == 4 && this.status == 200) {
					  document.getElementById("alfa_calculad").innerHTML =
					  this.responseText;
					}
				  };
				  xhttp.open("GET", "alfacalculado", true);
				  xhttp.send();
				}
				function getDataBetaCalculado() {
				  var xhttp = new XMLHttpRequest();
				  xhttp.onreadystatechange = function() {
					if (this.readyState == 4 && this.status == 200) {
					  document.getElementById("beta_calculad").innerHTML =
					  this.responseText;
					}
				  };
				  xhttp.open("GET", "betacalculado", true);
				  xhttp.send();
				}
			</script>
		</body>
</html>
)=====";
