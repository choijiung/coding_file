import streamlit as st
import pandas as pd
veiw = [17494, 11495, 13430, 18938, 17902, 16109, 41401, 53121, 59899, 53450, 822565, 183680, 215009, 22889479, 9962498, 4143373, 866392, 256101, 1407983]
sheetview = pd.Series(veiw)
st.write("# This is a test app about the Covid - 19")
st.write("# Covid - 19(monthly)")
st.write("## list(2021 ~ 2022)")
veiw
st.write("## bar chart")
st.bar_chart(veiw)
st.write("## line chart")
st.line_chart(veiw)
st.write("## pandas sheet")
sheetview