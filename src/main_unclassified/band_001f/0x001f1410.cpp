/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01C6212DD05A6B6E8A74A2C86A01349B2684FFB6548F334B78BBD8644790EDB0
 * Entry: 0x001f1410, Ghidra index: 6989, label: FUN_001f1410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001f1410(void)

{
  int in_EAX;
  int iVar1;
  uint local_308;
  undefined1 local_304 [260];
  char local_200 [156];
  char local_164;
  
  iVar1 = FUN_001f1b90(local_200,&local_308);
  if (-1 < iVar1) {
    if ((local_308 < 0x200) || (local_200[0] == '\0')) {
      FUN_001f17f0();
      *(undefined4 *)(in_EAX + 4) = 0;
      return 0;
    }
    FUN_001f1b40();
    if (local_164 == '5') {
      FUN_002f4839(local_304,0);
      return 0;
    }
    if ((local_164 == '0') || (local_164 == '\0')) {
      iVar1 = FUN_001f0da0();
      *(int *)(in_EAX + 0x248) = iVar1;
      if (iVar1 < 1) {
        *(undefined4 *)(in_EAX + 0x244) = 0xffffffff;
        *(undefined4 *)(in_EAX + 4) = 5;
        return 0;
      }
      iVar1 = FUN_002f2b3f(local_304,0x40000000,0,0,2,0x8000000,0);
      *(int *)(in_EAX + 0x244) = iVar1;
      if (iVar1 == -1) {
        *(undefined4 *)(in_EAX + 8) = 4;
        do {
          FUN_001f1b90(local_200,&local_308);
        } while (local_308 == 0x200);
        return 0x80004005;
      }
      XAPILIB__SetFilePointer(iVar1,*(undefined4 *)(in_EAX + 0x248),0,0);
      XAPILIB__SetEndOfFile(*(undefined4 *)(in_EAX + 0x244));
      XAPILIB__SetFilePointer(*(undefined4 *)(in_EAX + 0x244),0,0,0);
      *(undefined4 *)(in_EAX + 4) = 5;
      return 0;
    }
    *(undefined4 *)(in_EAX + 8) = 6;
  }
  return 0x80004005;
}
