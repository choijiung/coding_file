import streamlit as st
import pandas as pd
veiw = [100, 150, 30]
sheetview = pd.Series(veiw)
st.write("# Youtube view")
st.write("## raw")
veiw
st.write("## bar chart")
st.bar_chart(veiw)
sheetview