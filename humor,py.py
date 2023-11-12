# Importando as bibliotecas necessárias
from sklearn.feature_extraction.text import CountVectorizer
from sklearn.naive_bayes import MultinomialNB
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

# Dados de treinamento
textos = ["Este é um exemplo de texto positivo",
          "Outro exemplo positivo",
          "Um terceiro exemplo feliz",
          "Este é um exemplo de texto negativo",
          "Outro exemplo negativo",
          "Um terceiro exemplo triste"]
rotulos = [1, 1, 1, 0, 0, 0]  # 1 para positivo, 0 para negativo

# Vetorização dos textos
vectorizer = CountVectorizer()
X = vectorizer.fit_transform(textos)

# Dividindo os dados em conjuntos de treinamento e teste
X_train, X_test, y_train, y_test = train_test_split(X, rotulos, test_size=0.2, random_state=42)

# Treinando o classificador Naive Bayes
classifier = MultinomialNB()
classifier.fit(X_train, y_train)

# Fazendo previsões
y_pred = classifier.predict(X_test)

# Avaliando a precisão do modelo
accuracy = accuracy_score(y_test, y_pred)
print("Precisão do modelo:", accuracy)
