/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C3F33644F64217C68FF7205569F0FC6D37E42D0583A6C398DB5A2A1370EAC5A
 * Entry: 0x0003bf50, Ghidra index: 424, label: FUN_0003bf50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001bd30(uint32_t unaff_ESI);
extern void FUN_0003c6b0(void);
extern void FUN_0003c210(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5);

void FUN_0003bf50(void)

{
  uint uVar1;
  int iVar2;
  int in_EAX;
  int unaff_EDI;
  int local_8;
  undefined4 local_4;
  
  if (unaff_EDI != in_EAX) {
    if (*(uint *)(in_EAX + 0x10) == 0) {
      FUN_0001bd30();
      return;
    }
    uVar1 = *(uint *)(unaff_EDI + 0x10);
    iVar2 = *(int *)(in_EAX + 0xc);
    if (*(uint *)(in_EAX + 0x10) <= uVar1) {
      FUN_0003c6b0(iVar2);
      FUN_0003c210(&local_8,local_8,local_4,*(int *)(unaff_EDI + 0x10) + *(int *)(unaff_EDI + 0xc),
                   unaff_EDI);
      return;
    }
    local_8 = iVar2;
    FUN_0003c6b0(iVar2);
    FUN_0003c6e0(unaff_EDI,*(int *)(unaff_EDI + 0x10) + *(int *)(unaff_EDI + 0xc),unaff_EDI,
                 uVar1 + iVar2,in_EAX,*(int *)(in_EAX + 0x10) + *(int *)(in_EAX + 0xc),in_EAX);
  }
  return;
}
