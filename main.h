#ifndef  MAIN_H
#define MAIN_H

#define MAX_INPUT_SIZE 1024

void parse_input(char *input, char **tokens_count);
void execute_command(char **tokens, int token_count);

#endif /* MAIN_H */
