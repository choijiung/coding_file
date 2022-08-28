import requests
from bs4 import BeautifulSoup
import time
import csv

headers = {"User-Agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36"}

for i in range(1, 6):
    url = "https://www.google.com/search?q=zeolite&sxsrf=ALiCzsa_SUHMo25dWsuXnyDEDPOM78-6NA:1652598139990&ei=e6WAYrmKPPCkmAWd_oiYCA&start={}0&sa=N&ved=2ahUKEwj5s9zo9-D3AhVwEqYKHR0_AoMQ8tMDegQIAhA9&biw=1366&bih=625&dpr=1".format(i)
    
    res = requests.get(url, headers=headers)
    res.raise_for_status()
    soup = BeautifulSoup(res.text, "lxml")

    scraped = soup.find_all("div", attrs = {"class" : "g tF2Cxc"})
    for scrap in scraped:
        title = scrap.h3.get_text()
        link = scrap.a["href"]
        curr_time = time.strftime("_%Y%m%d_%H%M%S")
        name = "./scrap {}.txt".format(curr_time)
        with open(name, "a", encoding = 'utf-8') as f:
            f.write("\n제목 : " + title + "\n링크 : " + link + "\n")

print("작업이 완료되었습니다")