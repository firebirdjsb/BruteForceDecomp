/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3088E9576A0C905139C32B0FD29A1C27592F44AFB1F203DDE1851031E0E741E
 * Entry: 0x00073330, Ghidra index: 1295, label: FUN_00073330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00072c30(int param_1);
extern char FUN_00072b90(void);
extern void FUN_00073110(undefined4 param_1,int param_2,undefined4 param_3);
extern void FUN_00072940(void);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_00072900(int param_1,int param_2);
extern void FUN_00072890(void);

void FUN_00073330(float param_1)

{
  int in_EAX;
  int iVar1;
  char cVar2;
  
  cVar2 = *(int *)(in_EAX + 0x38) != 0;
  if (*(int *)(in_EAX + 0x40) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (*(int *)(in_EAX + 0x48) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (*(int *)(in_EAX + 0x50) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (*(int *)(in_EAX + 0x58) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (*(int *)(in_EAX + 0x60) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (*(int *)(in_EAX + 0x68) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 == '\0') {
    *(undefined1 *)(in_EAX + 200) = 1;
  }
  if (*(char *)(in_EAX + 200) == '\x01') {
    FUN_00072c30(in_EAX);
    iVar1 = FUN_00072b90();
    if (iVar1 == 0) {
      iVar1 = *(int *)(in_EAX + 0x70);
      if ((iVar1 != 0) && (*(int *)(in_EAX + 0x38) != iVar1)) {
        FUN_00073110(in_EAX,iVar1,0);
        FUN_00072940();
        if (*(int *)(in_EAX + 0x38) != iVar1) {
          FUN_0008f6a0(iVar1);
        }
        FUN_00072900(iVar1,0);
        *(undefined4 *)(in_EAX + 0x74) = 2;
        FUN_00072890();
      }
    }
    else {
      *(undefined1 *)(in_EAX + 200) = 0;
    }
  }
  if (*(float *)(in_EAX + 0x78) != *(float *)(in_EAX + 0x7c)) {
    if (*(float *)(in_EAX + 0x80) < param_1 == (*(float *)(in_EAX + 0x80) == param_1)) {
      *(float *)(in_EAX + 0x78) =
           (*(float *)(in_EAX + 0x7c) - *(float *)(in_EAX + 0x78)) *
           (param_1 / *(float *)(in_EAX + 0x80)) + *(float *)(in_EAX + 0x78);
      *(float *)(in_EAX + 0x80) = *(float *)(in_EAX + 0x80) - param_1;
    }
    else {
      *(undefined4 *)(in_EAX + 0x78) = *(undefined4 *)(in_EAX + 0x7c);
      *(undefined4 *)(in_EAX + 0x80) = 0;
    }
    if (*(int *)(in_EAX + 0x38) != 0) {
      FUN_00073110(in_EAX,*(int *)(in_EAX + 0x38),0);
    }
  }
  return;
}
