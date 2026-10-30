/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B0A5516648ADC75172F613F21E6A441A82EEB1C42BED2ABCDC55D349995A031
 * Entry: 0x0022e050, Ghidra index: 7720, label: FUN_0022e050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469984;
uint FUN_0022e050(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uStack_84;
  
  if (*(int *)(param_1[0x8a] + 0x118) != 0) {
    uStack_84 = param_1[0xd9];
    cVar1 = (**(code **)(*DAT_00469940 + 0x2c))();
    if ((cVar1 == '\0') && ((*(byte *)(param_1 + 0x89) & 8) != 0)) {
      (**(code **)(*DAT_00469940 + 0x20))(param_1[0xd9],1);
      param_1[0xd9] = 0;
      *(byte *)(param_1 + 0x89) = *(byte *)(param_1 + 0x89) & 0xf7;
      cVar1 = FUN_0022dcc0();
      if (cVar1 == '\0') {
        iVar2 = FUN_0017c080(param_1[2]);
        param_1[0xd9] = iVar2;
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        iVar2 = FUN_0017c170(DAT_00469984);
        param_1[0xd9] = iVar2;
        if (iVar2 == 0) {
          return 0;
        }
        FUN_0003f010();
        (**(code **)(*param_1 + 0x40))();
        FUN_00040f10();
        (**(code **)(*DAT_00469940 + 0x50))(param_1[0xd9],0,0x3eb33333);
        cVar1 = FUN_0017c110(&uStack_84,0);
        if (cVar1 != '\0') {
          return 1;
        }
        (**(code **)(*DAT_00469940 + 0x20))(param_1[0xd9],1);
        param_1[0xd9] = 0;
      }
      return uStack_84 >> 0x18;
    }
  }
  return 0;
}
