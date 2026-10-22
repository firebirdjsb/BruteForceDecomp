/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D301E1CC7AF954BC1E29303556292086E37CE7B8046EAAAAE0F98CCE5B51ED5
 * Entry: 0x00174460, Ghidra index: 4908, label: FUN_00174460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00174460(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_002383b0();
  if (iVar2 != 0) {
    iVar2 = FUN_00174420();
    if (iVar2 == 0) {
      iVar2 = FUN_002ea01d(0x130);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_00174620();
      }
      cVar1 = FUN_00174c30();
      if (cVar1 != '\0') {
        FUN_00174350();
        return iVar2;
      }
      if (iVar2 != 0) {
        (*(code *)**(undefined4 **)(iVar2 + 4))(1);
      }
      return 0;
    }
  }
  return 0;
}
