/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B099E2C1D9635989A4513B5B29B77B538073E604098FD067FA17C96BAF64939
 * Entry: 0x002f043f, Ghidra index: 10740, label: __trandisp2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7295;
/* Library Function - Single Match
    __trandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2019 */

void __trandisp2(void)

{
  float10 fVar1;
  char cVar2;
  byte bVar3;
  int in_EDX;
  undefined2 uVar4;
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  
  if (*(char *)(in_EDX + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar4;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = in_EDX;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)isnan(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)isnan(in_ST1) << 8 | (ushort)(in_ST1 < fVar1) << 9 | (ushort)(in_ST1 != fVar1) << 10 |
       (ushort)(in_ST1 == fVar1) << 0xe;
  bVar3 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  cVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x002f04c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_EDX + (char)((&DAT_003b7295)[(byte)(cVar2 << 1 | cVar2 < '\0') & 0xf] |
                              (&DAT_003b7295)[(byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0')] << 2) +
              0x10))();
  return;
}
