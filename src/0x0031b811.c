/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A69ACF58091CD35E29D4A8B927DDF4A65691918C63EA14C3C784A31ECB30CB40
 * Entry: 0x0031b811, Ghidra index: 12300, label: FUN_0031b811
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ff2c;
int FUN_0031b811(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  
  iVar1 = DAT_0032ff2c;
  iVar2 = FUN_0031c7cc(1);
  if (-1 < iVar2) {
    iVar2 = FUN_0031c25e(0,0);
    if (-1 < iVar2) {
      iVar2 = FUN_0031c471(0,0,0);
      if (-1 < iVar2) {
        FUN_0031c2c6(iVar1,0x2000);
        iVar2 = FUN_0031c25e(1,0);
        if (-1 < iVar2) {
          iVar2 = FUN_0031c471(0,0,0);
          if (-1 < iVar2) {
            if ((*(byte *)(*(int *)(in_ECX + 4) + 10) & 1) == 0) {
              FUN_0031c2c6(iVar1,0x2000);
              uVar3 = 0x2000000;
            }
            else {
              FUN_0031c2c6(iVar1 + 0x2000,0x4000);
              uVar3 = 0x2000002;
            }
            FUN_0031c1f1(uVar3);
          }
        }
      }
    }
  }
  return iVar2;
}
