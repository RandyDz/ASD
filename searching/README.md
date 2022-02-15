# SEARCHING(Sequential Searching & Binary Searching)
**SEARCHING**
<br/>
- Searching merupakan proses pencarian sebuah data yang diinginkan. Pencarian dalam Bahasa C harus memeriksa elemen dan mengambil elemen dari struktur data tempat data disimpan. 
- Berdasarkan jenis operasi pencarian, umumnya ada dua di dalam C :
1. [Sequential Searching](https://github.com/RandyDz/ASD/tree/main/searching/searching_binary)<br/>
  -> Sequential Searching merupakan metode pencarian yang paling sederhana. Prinsipnya yaitu data yang ada dibandingkan satu per satu dan dicari sampai data tersebut ditemukan          atau tidak. 
2. [Binary Searching](https://github.com/RandyDz/ASD/tree/main/searching/searching_linear)<br/>
  -> Binary search adalah teknik pencarian data dengan cara membagi setengah dari jumlah data. Mula-mula diambil posisi awal 0 dan posisi akhir n-1, kemudian dicari posisi data        tengah dengan rumus (posisi awal + posisi akhir)/2. Kemudian data yang dicari dibandingkan dengan data tengah. Jika nilai tengah lebih kecil, bergerak ke kanan dengan posisi      tengah +1. Jika nilai tengah lebih besar, bergerak ke kiri dengan posisi tengah -1. Demikian seterusnya sampai data tengah sama dengan yang dicari.
