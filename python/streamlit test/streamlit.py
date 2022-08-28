import streamlit as st
veiw = [100, 150, 30]
st.write("# Youtube view")
st.write("## raw")
veiw
st.write("## bar chart")
st.bar_chart(veiw)
import pandas as pd
sview = pd.Series(veiw)
sview