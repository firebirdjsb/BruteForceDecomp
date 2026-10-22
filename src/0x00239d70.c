/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC5A90E30158A25DCE73D74926DD3EC70BD0070DD66C0FF3A4DC6820756EB2B9
 * Entry: 0x00239d70, Ghidra index: 7894, label: FUN_00239d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00406884;
extern uint32_t PTR_DAT_00406888;
extern uint32_t PTR_s__xmb_gz_00406880;
undefined4 FUN_00239d70(void)

{
  undefined *puVar1;
  char *in_EAX;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = _strrchr(in_EAX,0x2e);
  if (pcVar2 != (char *)0x0) {
    iVar4 = 0;
    puVar1 = PTR_s__xmb_gz_00406880;
    while (puVar1 != (undefined *)0x0) {
      iVar3 = FUN_00234c90();
      if (iVar3 == 0) {
        return (&DAT_00406884)[iVar4 * 2];
      }
      iVar3 = iVar4 * 2;
      iVar4 = iVar4 + 1;
      puVar1 = (&PTR_DAT_00406888)[iVar3];
    }
  }
  return 0;
}
