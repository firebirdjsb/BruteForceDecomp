/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2700FFB7F14BA3A8679314853598D8D1E97028F9FED986E8906DECD6484448A8
 * Entry: 0x0010a420, Ghidra index: 3426, label: FUN_0010a420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_float_lane.h"
/* Scoped operand repair: docs/evidence/0010a420-float-word-storage.md.
 * The two virtual-call output DWORDs share one eight-byte buffer. Object
 * +0x24 and +0x10 are raw DWORD accesses, not numeric float conversions.
 * Entry registers, indirect target and complete callee ABI remain unverified. */
void FUN_0010a420(void)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  byte bVar5;
  int in_EAX;
  unsigned char *pfVar4;
  int *piVar6;
  undefined1 uStack_18;
  byte bStack_15;
  float local_14;
  float local_10;
  uint32_t position_output[2];
  uint32_t field_word;
  uint32_t argument_word;
  undefined4 uStack_c;
  int *local_8;
  
  local_10 = 0.0;
  local_14 = 0.0;
  if (*(int **)(in_EAX + 8) != (int *)0x0) {
    /* 0x10a441..0x10a455: pass [ESP+0x1c], then copy DWORDs at
     * +0x1c/+0x20. Later FLD reads their copies as m32fp. Do not
     * initialize output bytes the unresolved virtual target must supply. */
    (**(code **)(**(int **)(in_EAX + 8) + 8))(position_output);
    local_10 = bf_x86_word_to_f32(position_output[0]);
    local_14 = bf_x86_word_to_f32(position_output[1]);
  }
  if (*(undefined4 **)(in_EAX + 0x80) == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)**(undefined4 **)(in_EAX + 0x80);
  }
  piVar1 = *(int **)(in_EAX + 0x80);
  local_8 = piVar1;
  FUN_000ef3a0(&uStack_c);
  if (piVar6 != piVar1) {
    do {
      pfVar2 = (float *)piVar6[2];
      if (((*(byte *)(in_EAX + 0x28) & 1) != 0) && (*(char *)(in_EAX + 0xa8) != '\0')) {
        FUN_0010a2e0(pfVar2,local_10,local_14);
      }
      if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(in_EAX + 0x97),*(undefined1 *)(in_EAX + 0x94)),
                            *(undefined1 *)(in_EAX + 0x95)),*(undefined1 *)(in_EAX + 0x96)) != 0) {
        uVar3 = *(uint *)(in_EAX + 0x94);
        bStack_15 = (byte)(uVar3 >> 0x18);
        bVar5 = (byte)(uStack_c >> 0x18);
        if (bVar5 < bStack_15) {
          bStack_15 = bVar5;
        }
        /* 0x10a4fa..0x10a504: CMP DWORD [ESI+0x24],8; JB
         * takes inline +0x10; otherwise MOV reads a 32-bit address. */
        memcpy(&field_word,(unsigned char *)pfVar2 + 0x24,4);
        if (field_word < 8U) {
          pfVar4 = (unsigned char *)pfVar2 + 0x10;
        }
        else {
          memcpy(&field_word,(unsigned char *)pfVar2 + 0x10,4);
          pfVar4 = (unsigned char *)(uintptr_t)field_word;
        }
        /* 0x10a507 / 0x10a522 push object+8 as an unchanged DWORD. */
        memcpy(&argument_word,(unsigned char *)pfVar2 + 8,4);
        uStack_18 = (undefined1)uVar3;
        FUN_000ccd20(*(undefined4 *)(in_EAX + 0xf0),local_10 + *pfVar2 + 1.0,
                     local_14 + pfVar2[1] + 1.0,
                     ((uint)CONCAT11(bStack_15,uStack_18) * 0x100 + (uVar3 >> 8 & 0xff)) * 0x100 +
                     (uVar3 >> 0x10 & 0xff),pfVar4,argument_word,0x3f800000,0,0,0xffffffff);
      }
      /* 0x10a572..0x10a57c repeat the same DWORD/address selection. */
      memcpy(&field_word,(unsigned char *)pfVar2 + 0x24,4);
      if (field_word < 8U) {
        pfVar4 = (unsigned char *)pfVar2 + 0x10;
      }
      else {
        memcpy(&field_word,(unsigned char *)pfVar2 + 0x10,4);
        pfVar4 = (unsigned char *)(uintptr_t)field_word;
      }
      /* 0x10a595 / 0x10a59e push +8 raw; 0x10a59f..0x10a5c8
       * assemble bytes 3,0,1,2 of the real FUN_000ef3a0 output DWORD. */
      memcpy(&argument_word,(unsigned char *)pfVar2 + 8,4);
      FUN_000ccd20(*(undefined4 *)(in_EAX + 0xf0),local_10 + *pfVar2,local_14 + pfVar2[1],
                   (uStack_c & UINT32_C(0xff000000)) |
                   ((uStack_c & UINT32_C(0x000000ff)) << 16) |
                   (uStack_c & UINT32_C(0x0000ff00)) |
                   ((uStack_c >> 16) & UINT32_C(0xff)),pfVar4,argument_word,
                   0x3f800000,*(undefined4 *)(in_EAX + 0xa0),*(undefined4 *)(in_EAX + 0xa4),
                   0xffffffff);
      piVar6 = (int *)*piVar6;
    } while (piVar6 != local_8);
  }
  return;
}
