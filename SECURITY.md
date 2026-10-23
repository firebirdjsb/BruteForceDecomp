# Security and credentials

**Do not disclose secrets in public issues, PRs, code, screenshots or CI logs.** Use [GitHub private vulnerability reporting](https://github.com/firebirdjsb/BruteForceDecomp/security/advisories/new) if enabled, or contact the maintainer using an established private channel.

If a secret is exposed, **revoke and rotate it immediately** with its provider, then examine tracked files, Git history, Actions logs/artifacts, PRs, forks and clones. Merely removing the token from the newest commit does not make it safe.

The checked-in security audit checks tracked filenames, forbidden commercial artifacts, and high-confidence token shapes. It **cannot guarantee absence of all secrets**, examine all historical commits, or verify external providers. Enable GitHub secret scanning, push protection and review/branch rules in repository settings where available.

Keep the original Xbox XBE, ISO, commercial asset files, full Ghidra dumps and local credentials **out of this public repository**.
