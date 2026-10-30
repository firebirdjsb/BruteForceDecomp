/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A884240D77284B33EA4329140BBC6CA31F9B2E5E6F51B65E6385EA335CDF6384
 * Entry: 0x00317146, Ghidra index: 12170, label: FUN_00317146
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386a20;
void FUN_00317146(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = PTR_FUN_00386a20;
  uVar3 = 0;
  do {
    FUN_00316bd8(uVar3);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  DSOUND__CMcpxStream_Flush(0);
  FUN_00316b69();
  piVar1 = (int *)in_ECX[0x22];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x22] = 0;
  }
  iVar2 = in_ECX[0x32];
  if (iVar2 != 0) {
    FUN_00314937(iVar2);
    in_ECX[0x32] = 0;
  }
  FUN_00318b5c();
  return;
}
