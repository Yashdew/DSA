import numpy as np
import pandas as pd
#import re

df = pd.read_csv("datasets/dataset_Facebook.csv",delimiter=";")
#x = re.sub(";", ",", df)
print(df.columns.tolist())
print(df.head())
col = df[0:3]
print(col)