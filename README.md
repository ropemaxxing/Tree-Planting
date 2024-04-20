ทำงาน

clear screen 
- system("clear");

ใครทำห่าอะไรบ้าง
หมาอาร์ม:
-หลายอย่าง วางระบบ

ดำไผ่:
-Linkedlist ตีมอน

kitkatgojo:
-(1)watering/ (2)putting fertilizer
    ->เพิ่ม watering() กับ puttingfert() ใน Game.h
    [player.h]
    water กับ fert อยู่ใน private --> เรียกใช้ wateramount(), fertamount()

-ระบบlevel
    ->เพิ่ม treelevelup() ใน TreeStat.h
    [TreeStat.h]
    treelevel watermax waternow fertmax fertnow อยู่ใน private --> เรียกใช้ เติม stat()ข้างหลัง เช่น treelevelstat()
    **เพิ่ม function อะไรใน class tree ใน TreeStat.h ต้องเพิ่มใน class NODE ใน NODE.h ด้วย
