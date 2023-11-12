import tkinter as tk
from math import sin, cos, tan, log10, sqrt

# Função que tenta calcular a expressão matemática segura
def safe_eval(expr):
    try:
        return eval(expr, {"__builtins__": None}, {"sin": sin, "cos": cos, "tan": tan, "log": log10, "sqrt": sqrt})
    except Exception as e:
        return "Erro"

# Função que será chamada quando os botões forem pressionados
def on_click(char):
    if char == '=':
        result = safe_eval(entry.get())
        update_history(entry.get(), result)
        entry.delete(0, tk.END)
        entry.insert(tk.END, str(result))
    elif char == 'C':
        entry.delete(0, tk.END)
    elif char == 'DEL':
        current_text = entry.get()
        entry.delete(0, tk.END)
        entry.insert(tk.END, current_text[:-1])
    else:
        entry.insert(tk.END, char)

# Atualiza o histórico de cálculos
def update_history(expression, result):
    history_text.insert(tk.END, f"{expression} = {result}\n")
    history_text.see(tk.END)

# Limpa o histórico de cálculos
def clear_history():
    history_text.delete(1.0, tk.END)

# Cria a janela principal
root = tk.Tk()
root.title("Calculadora Avançada")

# Cria a entrada de texto onde as expressões serão mostradas e digitadas
entry = tk.Entry(root, width=50, borderwidth=5)
entry.grid(row=0, column=0, columnspan=4, padx=10, pady=10)

# Área de texto para o histórico de cálculos
history_label = tk.Label(root, text="Histórico de Cálculos:")
history_label.grid(row=1, column=0, columnspan=4)
history_text = tk.Text(root, height=10, width=50)
history_text.grid(row=2, column=0, columnspan=4, sticky="nsew")

# Botão para limpar o histórico
clear_history_button = tk.Button(root, text="Limpar Histórico", width=15, height=1, command=clear_history)
clear_history_button.grid(row=8, column=2, columnspan=1)

# Botões para números e operações básicas
buttons = [
    ('7', 3, 0), ('8', 3, 1), ('9', 3, 2), ('/', 3, 3),
    ('4', 4, 0), ('5', 4, 1), ('6', 4, 2), ('*', 4, 3),
    ('1', 5, 0), ('2', 5, 1), ('3', 5, 2), ('-', 5, 3),
    ('0', 6, 0), ('.', 6, 1), ('=', 6, 2), ('+', 6, 3),
    ('sin', 7, 0), ('cos', 7, 1), ('tan', 7, 2), ('log', 7, 3),
    ('C', 8, 0), ('DEL', 8, 1)
]

# Cria os botões na janela usando um loop
for (text, row, col) in buttons:
    button = tk.Button(root, text=text, width=10, height=2, command=lambda char=text: on_click(char))
    button.grid(row=row, column=col)

# Inicia o loop principal da interface gráfica
root.mainloop()
