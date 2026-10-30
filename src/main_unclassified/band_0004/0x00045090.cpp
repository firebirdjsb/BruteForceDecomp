/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70E03663937031EBDA2AED031ECB8EC91CAFC89AF6C062F61F69A3F7E6C6A34F
 * Entry: 0x00045090, Ghidra index: 534, label: FUN_00045090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern int FUN_0004ab70(void);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_00045250(undefined4 param_1,undefined4 param_2,int *param_3);

void FUN_00045090(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined1 local_40 [36];
  int local_1c;
  
  iVar1 = FUN_000120f0();
  if (((*(byte *)(in_EAX + 0x15c) & 1) == 0) ||
     (*(float *)(in_EAX + 0x158) < 0.0 != (*(float *)(in_EAX + 0x158) == 0.0))) {
    if (*(int *)(iVar1 + 0x59c) != 0) {
      iVar2 = FUN_0004ab70();
      if (iVar2 != 0) {
        FUN_00012320(0x27);
        *(uint *)(iVar1 + 0x250) = *(uint *)(iVar1 + 0x250) | 1;
        if (local_1c != *(int *)(iVar1 + 0x24c)) {
          FUN_0008f6a0(*(int *)(iVar1 + 0x24c));
        }
        FUN_00045250(in_EAX,local_40,0);
        FUN_00012440();
        *(byte *)(in_EAX + 0x15c) = *(byte *)(in_EAX + 0x15c) & 0xf9 | 1;
        *(undefined4 *)(in_EAX + 0x160) = 0x40000000;
        *(undefined4 *)(in_EAX + 0x158) = 0x40000000;
        return;
      }
    }
    *(byte *)(in_EAX + 0x15c) = *(byte *)(in_EAX + 0x15c) & 0xf9 | 1;
    *(undefined4 *)(in_EAX + 0x160) = 0x3f800000;
    *(undefined4 *)(in_EAX + 0x158) = 0x3f800000;
  }
  return;
}
