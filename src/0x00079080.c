/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 826EC9F8E4269FA045D583FC5DF106C62E8D9EFC761D6B76D39C7D080C0621C9
 * Entry: 0x00079080, Ghidra index: 1441, label: FUN_00079080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400128;
extern uint32_t DAT_00400534;
undefined4 FUN_00079080(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *in_EDX;
  undefined4 unaff_EDI;
  undefined1 local_120 [4];
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  undefined1 local_104 [260];
  
  local_108 = 0xf;
  local_10c = 0;
  local_11c = local_11c & 0xffffff00;
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  FUN_001e88e0(&DAT_00400128,local_120,&DAT_00400534);
  if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_11c);
  }
  iVar3 = FUN_002f2fac(local_104,unaff_EDI,1);
  if (iVar3 != 0) {
    FUN_002f2fcb(unaff_EDI,0x80);
    FUN_0023a1c0();
    FUN_00079310();
    return 1;
  }
  return 0;
}
