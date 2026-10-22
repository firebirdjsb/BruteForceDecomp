/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C89A919F8828F0CA738597853DC8DB927C20D17D76ECC071E67D9ED6F7D5D7D8
 * Entry: 0x00178f40, Ghidra index: 4979, label: FUN_00178f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00178f40(void)

{
  char cVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  cVar1 = FUN_0017a1b0();
  if (cVar1 != '\0') {
    cVar1 = FUN_0017a1b0();
    if (cVar1 != '\0') {
      cVar1 = FUN_0017a1b0();
      if (((cVar1 != '\0') && (*(float *)(unaff_EDI + 0x30) == *(float *)(unaff_ESI + 0x30))) &&
         (*(char *)(unaff_EDI + 0x34) == *(char *)(unaff_ESI + 0x34))) {
        cVar1 = FUN_0017a210();
        if (cVar1 != '\0') {
          cVar1 = FUN_0017a210();
          if (cVar1 != '\0') {
            cVar1 = FUN_0017a210();
            if (cVar1 != '\0') {
              cVar1 = FUN_0017a210();
              if (cVar1 != '\0') {
                cVar1 = FUN_0017a230();
                if (cVar1 != '\0') {
                  cVar1 = FUN_0017a230();
                  if (cVar1 != '\0') {
                    cVar1 = FUN_0017a250();
                    if (cVar1 != '\0') {
                      cVar1 = FUN_0017a250();
                      if (cVar1 != '\0') {
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
