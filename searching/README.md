# SEARCHING(Sequential Searching & Binary Searching)
**SEARCHING**
<br/>
- Searching merupakan proses pencarian sebuah data yang diinginkan. Pencarian dalam Bahasa C harus memeriksa elemen dan mengambil elemen dari struktur data tempat data disimpan. 
- Berdasarkan jenis operasi pencarian, umumnya ada dua di dalam C :
1. [Sequential Searching](https://github.com/RandyDz/ASD/tree/main/searching/searching_linear)<br/>
  -> Sequential Searching merupakan metode pencarian yang paling sederhana. Prinsipnya yaitu data yang ada dibandingkan satu per satu dan dicari sampai data tersebut ditemukan          atau tidak. 
2. [Binary Searching](https://github.com/RandyDz/ASD/tree/main/searching/searching_binary)<br/>
  -> Binary search adalah teknik pencarian data dengan cara membagi setengah dari jumlah data. Mula-mula diambil posisi awal 0 dan posisi akhir n-1, kemudian dicari posisi data        tengah dengan rumus (posisi awal + posisi akhir)/2. Kemudian data yang dicari dibandingkan dengan data tengah. Jika lebih kecil, proses dilakukan kembali tetapi posisi akhir      dianggap sama dengan posisi tengah –1. Jika lebih besar, proses dilakukan kembali tetapi posisi awal dianggap sama dengan posisi tengah +1. Demikian seterusnya sampai data        tengah sama dengan yang dicari.
