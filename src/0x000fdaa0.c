/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B9C97F897C0F63AB5644D034CEB77A011ECC62C4EEFEE8C4574EC090471D28F
 * Entry: 0x000fdaa0, Ghidra index: 3173, label: FUN_000fdaa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fdaa0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_EAX;
  
  if (*param_1 == 0) {
    if (*in_EAX != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*in_EAX);
    }
    *in_EAX = 0;
  }
  else if (*in_EAX == 0) {
    FUN_000fda50();
  }
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*in_EAX;
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    puVar2[5] = puVar1[5];
    puVar2[6] = puVar1[6];
    *(undefined1 *)(puVar2 + 7) = *(undefined1 *)(puVar1 + 7);
    *(undefined1 *)((int)puVar2 + 0x1d) = *(undefined1 *)((int)puVar1 + 0x1d);
    puVar2[8] = puVar1[8];
  }
  return;
}
