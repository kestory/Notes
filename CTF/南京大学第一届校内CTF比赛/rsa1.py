import gmpy2
p = gmpy2.mpz(9648423029010515676590551740010426534945737639235739800643989352039852507298491399561035009163427050370107570733633350911691280297777160200625281665378483)
q = gmpy2.mpz(11874843837980297032092405848653656852760910154543380907650040190704283358909208578251063047732443992230647903887510065547947313543299303261986053486569407)
e = gmpy2.mpz(65537)
phi_n = (p - 1) * (q - 1)
d = gmpy2.invert(e, phi_n)
print("private key")
print(d)

c = gmpy2.mpz(4127006484386770555853237444142417954233620649397386731616464749364267790663465697528304853398835619443013657131941905584466963172818302557887983907894783395558736707315809139223495824469586843624766480898380848558062372870060356657961290953502808518913870469399149131403383546268517455820636502342516799567)
print("plaintext")
print(pow(c, d, p * q))
