/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F23860CA07AFD14E7EE6619BFC7A46661FBAF7EEFED045177E4F61AAA83DCA14
 * Entry: 0x00102cf0, Ghidra index: 3279, label: FUN_00102cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00102cf0(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  if (in_EAX != 0) {
    iVar1 = FUN_002eaa70();
    if (iVar1 != 0) {
      iVar1 = FUN_00102b50(param_2,&local_4);
      if (iVar1 != 0) {
        iVar1 = FUN_001098f0();
        if (iVar1 != 0) {
          FUN_0010a7d0();
        }
      }
      return local_4;
    }
  }
  return 0xffffffff;
}
