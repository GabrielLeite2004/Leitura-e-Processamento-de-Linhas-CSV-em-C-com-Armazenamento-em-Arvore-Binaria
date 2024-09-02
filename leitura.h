int lerArquivo(char linha[MAX_LINHA], tree tr)
{


  elemento1 dados = VL_NULO;
  elemento dados2 = VL_NULO2;
  
  int contagem2 = 0;
  char palavra[100] = "";
  int contagem = 0;
  int muda = 0;
  int primeiraVez = 0;
  
  muda = 0;
  contagem = 0;
  //printf("etrou aqui\n com %s", linha);
  
      while(contagem <= MAX_LINHA)
      {

          if(linha[contagem] != ';')
          {
              palavra[contagem2] = linha[contagem];
              contagem2 = contagem2 + 1;

          }
        
   

          if(linha[contagem] == ' ' && linha[contagem + 1] == ' ')
          {
            int tratamento = 0;
           // printf("antes: %s\n\n", linha);
            while(tratamento <= strlen(linha))
            {
                if(linha[tratamento] == ' ' && linha[tratamento + 1] == ' ')
                {
                  while(tratamento <= strlen(linha))
                  {
                    linha[tratamento] = linha[tratamento + 2];
                    tratamento = tratamento + 1;
                  }
                  tratamento = 0;
                }
                tratamento = tratamento + 1;
            }
            //printf("depois: %s\n\n", linha);

          }

        
          if(linha[contagem] == '"')
          {

             // system("pause");
             // printf("\n%s\n%.dGLP verifica erro\n ", linha, vez);
              linha[contagem] = '.';
              int trata = contagem;
              while(linha[trata] <= 200)
              {
                  if(linha[trata] == ';')
                  {
                      linha[trata] = '.';
                  }
                  if(linha[trata + 1] == '"')
                  {
                      linha[trata + 1] = '.';
                      break;
                  }
                  trata = trata + 1;
              }
              //system("pause");
              //printf("\n%s\n%.dGLP verifica erro\n ", linha, vez);
             // printf ("\ndados coleta %s\n", linha);
             // printf("---> %s\n", palavra);
          }



          if((linha[contagem-1] != ';' && (linha[contagem] == ';')) && (linha[contagem] == ';' ) || (((linha[contagem+1] == ';') && (linha[contagem + 2] == ';') || linha[contagem] == '\n')) || (linha[contagem] == ';' && linha[contagem + 1] == ';'))
          {


              if(muda == 0)
              {
                  strcpy(dados.regiao_sigla, palavra);
                  //strcpy(dados2.regiao_sigla,palavra);
                  //printf("\nSalvo\nSigla regiao %s\n\n\n", dados.regiao_sigla);
         
              }

              if(muda == 1)
              {
                  strcpy(dados.estado_sigla, palavra);
                 // strcpy(dados2.estado_sigla,palavra);

                  //printf("\nSalvo\nSigla Estado %s\n\n\n", dados.estado_sigla);
              }

              if(muda == 2)
              {

                  strcpy(dados.municipio, palavra);
                  //strcpy(dados2.municipio,palavra);

                  //printf("\nSalvo\nMunicipio %s\n\n\n", dados.municipio);
          
              }

              if(muda == 3)
              {
                  strcpy(dados.revenda, palavra);
                //  strcpy(dados.revenda, SempreNulo);
                //  printf("\nSalvo\nRevenda %s\n\n\n", dados.revenda);
                
              }

              if(muda == 4)
              {
            
                  strcpy(dados.cnpj_revenda, palavra);
                //  strcpy(dados2.cnpj_revenda,palavra);
                  //printf("\nSalvo\nRevenda %s\n\n\n", dados.cnpj_revenda);                   
              }

              if(muda == 5)
              {

                  strcpy(dados.nome_rua, palavra);
                  //printf("\nSalvo\nNome da rua %s\n\n\n", dados.nome_rua);
                
              }

              if(muda == 6)
              {
                int converte = 0;
                while(converte <= 10)
                {
                    if(palavra[converte] == 'S' || palavra[converte] == '/' || palavra[converte] == 'N')
                    {
                        palavra[converte] = '0';
                    }
                    converte = converte + 1;
                }
                if(strlen(palavra) == 0)
                {
                 // printf("string vazia\n");

                 palavra[0] = '0';
                  //printf("covertida para %s", palavra);
                    //getchar();

                  dados.numero_rua = atoi(palavra);

                }
                else
                {
                 dados.numero_rua = atoi(palavra);

                }
                
                //printf("\nSalvo\nNumero rua %s\n\n\n", dados.numero_rua);
              }

              if(muda == 7)
              {
                
                  strcpy(dados.complemento, palavra);
                  //printf("\nSalvo\nComplemento %s\n\n\n", dados.complemento);
                
              }

              if(muda == 8)
              {
                  strcpy(dados.bairro, palavra);
                 //printf("\nSalvo\nBairro %s\n\n\n", dados.bairro);
            
              }


              if(muda == 9)
              {
                  strcpy(dados.cep, palavra);
                  //printf("\nSalvo\nCep %s\n\n\n", dados.cep);

                
              }


              if(muda == 10)
              {
                  strcpy(dados.produto, palavra);
                 // printf("\nSalvo\Produto %s\n\n\n", dados.produto);
                
              }

              if(muda == 11)
              {
               /*if(strlen(palavra) >= 13)
                {
                  int quantidade1 = strlen(palavra);
                  printf("%d---%d.%s\n\n\n\n",vezes,quantidade1, palavra);
                  printf("\n\n\n\n%s", linha);

                  getchar();
                }*/

                  strcpy(dados.data_coleta, palavra);
                  strcpy(dados2.data_coleta, palavra);

                 // printf("\nSalvo\nData coleta %s\n\n\n", dados.data_coleta);
              }

              if(muda == 12)
              {
                  int converte = 0;
                  while(converte <= 10)
                  {
                      if(palavra[converte] == ',')
                      {
                          palavra[converte] = '.';
                      }
                      converte = converte + 1;
                  }
                if(strlen(palavra) == 0)
                {
                  palavra[0] = '00';
                  dados.valor_venda = atof(palavra);
                  dados2.valor_venda = atof(palavra);

                }
                else
                {
                  dados.valor_venda = atof(palavra);
                  dados2.valor_venda = atof(palavra);

                }

                //if(dados2.valor_venda >= 80)
                //{
                //  printf("\n%.2f", dados2.valor_venda);
              //  }
            
                  //dados.valor_venda = atof(palavra);
                  //dados2.valor_venda = dados.valor_venda;
                  //strcpy(dados.valor_venda, palavra);
                  //printf("\nSalvo\nValor venda %.2f\n\n\n", dados.valor_venda, palavra);
              }


              if(muda == 13)
              {
                  int converte = 0;
                  while(converte <= 20)
                  {
                      if(palavra[converte] == ',')
                      {
                          palavra[converte] = '.';
                      }
                      converte = converte + 1;
                  }
                  if(strlen(palavra) == 0)
                  {
                    //printf("string vazia\n");
        
                   palavra[0] = '0';
                   // printf("covertida para %s", palavra);
                      //getchar();

                    dados.valor_compra = atof(palavra);

                  }
                  else
                  {
                   dados.valor_compra = atof(palavra);
                    
                  }
                  //printf("\nSalvo\nValor compra %.2f\ntinha %s\n\n", dados.valor_compra, palavra);
              }


              if(muda == 14)
              {
                
                  strcpy(dados.unidade_medida, palavra);
                  //printf("\nSalvo\nUnidade mdeida %s\n\n\n", dados.unidade_medida);
            
              }


              if(muda == 15)
              {

                  strcpy(dados.bandeira, palavra);
      
                  memset(palavra, 0, sizeof(palavra));
                  muda = muda + 1;
                  contagem2 = 0;
                  //printf("\nSalvo\nBandeira %s\n\n\n", dados.bandeira);
                
                  break;



              }
            //  printf("\nSalvo\nValor compra %.2f\n\n\n", dados.valor_compra);
              memset(palavra, 0, sizeof(palavra));

              muda = muda + 1;
              contagem2 = 0;


          }

          contagem = contagem + 1;
      }

     /* printf("final de leitura temos \n ");
      printf("%s\n", dados2.estado_sigla);
      printf("%s\n", dados2.regiao_sigla);
      printf("%s\n", dados2.municipio);
      printf("%s\n", dados2.cnpj_revenda);
      printf("%s\n", dados2.data_coleta);
      printf("%.2f\n", dados2.valor_venda);*/
  

      

              adicionaUmElemento(&tr, dados2);
 // getchar();
      

}