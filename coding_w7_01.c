#include <stdio.h>

int main() {
    float score;

    // รับคะแนนสอบ midterm
    printf("กรอกคะแนนสอบ midterm: ");
    scanf("%f", &score);

    // ตรวจสอบเงื่อนไข ถ้าคะแนน >= 50 จะบวกคะแนนเพิ่ม 5%
    if (score >= 50) {
        score = score + (score * 0.05);
    }

    // แสดงผลคะแนนที่คำนวณได้
    printf("คะแนนรวม = %.2f\n", score);

    // แสดงข้อความสิ้นสุดการคำนวณ
    printf("End of evaluation\n");

    return 0;
}
